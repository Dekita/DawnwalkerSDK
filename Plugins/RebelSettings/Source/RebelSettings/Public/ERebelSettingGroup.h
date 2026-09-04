#pragma once
#include "CoreMinimal.h"
#include "ERebelSettingGroup.generated.h"

UENUM(BlueprintType)
enum class ERebelSettingGroup : uint8 {
    Audio_Volume,
    Audio_Settings,
    Video_Display,
    Video_Upscaler,
    Video_Framegen,
    Video_Quality,
    Video_PostProcess,
    Controls_System,
    Controls_Game,
    Controls_KeyBindings,
    Controls_Controller,
    Game_Accessibility,
    Game_Difficulty,
    Game_Gameplay,
    Game_Interface,
    Game_UserInterface,
    Game_Language,
    System,
};

