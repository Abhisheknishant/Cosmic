#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <iostream>
#include <fstream>
#include <string>

#include "imgui.h"
#include "imgui_impl_sdl.h"
#include "imgui_memory_editor.h"
#include "imgui_logger.h"
#include "imguifilesystem.h"

#include "cossys.hpp"

#ifdef __arm__ //If on the Raspberry Pi 
    #include "imgui_impl_opengl2.h"
    #include <SDL_opengl.h>
#else
    #include "imgui_impl_opengl3.h"
    #include <GL/gl3w.h>
#endif



class runGUI{
    private:

        void LoadIntoMemory(const char *filepath);
        void DumpMemory(const char *filepath);
        static void HelpMarker(const char *desc);
        void Assemble();
        void MemoryEditor(cossys sys);
        void Assembler();
        void ShowTopMenu();
        void VideoOut();




    public:
        int run();

};