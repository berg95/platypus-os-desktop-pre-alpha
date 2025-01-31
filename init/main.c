/********************************************************************
 * This file, main.c, is licensed under the GPLv3.0 or higher.      *
 * (c) DamieFC 2021                                                 *
 *******                                                      *******
 * Has the stuff for when the system boots up.                      *
 ********************************************************************/
#include "../../devices/emerald/video/vbe.h"
#inlcude "../../devices/emerald/keyboard/keyboard.h"
#include "../../libraries/graphics/emerald/libk/module.h"
#include "../../libraries/graphics/emerald/libk/logging.h"
#include "../include/common/unistd.h"

int main(){
    module("startup");
    static Color white = {255, 255, 255} black = {0, 0, 0};
    
    VBE_clear_screen(1, black); /* Black background */
    Keyboard_init();
    VBE_puts("Keyboard initialized...\n");
    log(INFO, "Keyboard initialized"); /* I'm not sure whether to put the logger before the text or after */
    VBE_puts("WELCOME TO PLATYPUS OS I DON'T KNOW WHY I TYPED THIS IN CAPS.\n", white); /* Obnoxious caps text */
    log(INFO, "Obnoxious caps text printed"); /* This one was easy */
    /* I think this should immediatly execute the cmd prompt. */
    exec("../../cli/platyPrompt/internal/main.c");
    log(INFO, "Shell executed"); /* Yay */
}
