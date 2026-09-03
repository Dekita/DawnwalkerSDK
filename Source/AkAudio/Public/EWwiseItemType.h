#pragma once
#include "CoreMinimal.h"
#include "EWwiseItemType.generated.h"

UENUM()
enum class EWwiseItemType {
    Event,
    AuxBus,
    AcousticTexture,
    AudioDeviceShareSet,
    State,
    Switch,
    GameParameter,
    Trigger,
    EffectShareSet,
    ActorMixer,
    Bus,
    Project,
    StandaloneWorkUnit,
    NestedWorkUnit,
    PhysicalFolder,
    Folder,
    Sound,
    SwitchContainer,
    RandomSequenceContainer,
    BlendContainer,
    MotionBus,
    StateGroup,
    SwitchGroup,
    InitBank,
    First = Event,
    Last = InitBank,
    LastWwiseBrowserType = EffectShareSet,
    None = -1,
};

