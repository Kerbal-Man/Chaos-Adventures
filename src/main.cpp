#include <iostream>
#include <string>
using namespace std;
#include "raylib.h"
#include "DevOptions.h"
#include "TextEdit.h"

static const string gsVersion = "Pre Alpha";
static const int giVersion = 1;

int main(void)
{
   const int screenWidth = GetScreenWidth();
   const int screenHeight = GetScreenHeight();
   //int Fps = FFFPS();
   SetTargetFPS(60);
   Camera camera = { 0 };
   camera.position = (Vector3){ 4.0f, 2.0f, 4.0f };
   camera.target = (Vector3){ 0.0f, 1.8f, 0.0f };
   camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };
   camera.fovy = 90;
   camera.projection = CAMERA_PERSPECTIVE;

   InitWindow(screenWidth, screenHeight, "Chaos Adventures | Pre Alpha (1)");

   SetCameraMode(camera, CAMERA_FIRST_PERSON);

   SetWindowIcon(LoadImage("Icon.png"));

   while (!WindowShouldClose() && !IsWindowHidden())
   {

       UpdateCamera(&camera);

       BeginDrawing();
           ClearBackground(BLACK);

           BeginMode3D(camera);

           DrawPlane((Vector3){ 0.0f, 0.0f, 0.0f }, (Vector2){ 32.0f, 32.0f }, LIGHTGRAY); // Draw ground

           EndMode3D();
           DrawFPS(15, 15);
           DrawText("WOW ITS WORKING" , 190, 200, 20, WHITE);

       EndDrawing();
   }


   CloseWindow();

   return 0;
}
