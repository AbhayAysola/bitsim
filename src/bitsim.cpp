#include "init.hpp"
#include "raylib-cpp.hpp"
#include <cmath>

const int wRatio = 16; // 16:9 ratio
const int hRatio = 9;

int main() {
  int defaultWidth = 1280; // Default dimensions for window
  int defaultHeight = 720;
  init(defaultWidth, defaultHeight);

  raylib::Window window(defaultWidth, defaultHeight);

  int monitor = GetCurrentMonitor();
  int mWidth = GetMonitorWidth(monitor);
  int mHeight = GetMonitorHeight(monitor); // Get the height of the monitors
  window.Close();

  defaultWidth = (std::floor(mWidth / wRatio) - 10) *
                 wRatio; // Get the max resolution which is in the right ratio
  defaultHeight = (std::floor(mHeight / hRatio) - 10) * hRatio;
  window.Init(defaultWidth, defaultHeight);
  window.SetPosition((mWidth - defaultWidth) / 2,
                     (mHeight - defaultHeight + 100) / 2);
  window.SetTargetFPS(60);

  while (!window.ShouldClose()) {
    window.BeginDrawing();
    // Render loop
    {
      window.DrawFPS();
      window.ClearBackground(DARKGRAY);
      for (int i = 0; i < defaultHeight; i += (defaultHeight / hRatio)) {
        raylib::Vector2 v1(0.0f, (float)i);
        raylib::Vector2 v2((float)defaultWidth, (float)i);
        v1.DrawLine(v2, MAROON);
      }
      for (int i = 0; i < defaultWidth; i += (defaultWidth / wRatio)) {
        raylib::Vector2 v1((float)i, 0.0f);
        raylib::Vector2 v2((float)i, (float)defaultHeight);
        v1.DrawLine(v2, MAROON);
      }
    }
    window.EndDrawing();
  }
  return 0;
}
