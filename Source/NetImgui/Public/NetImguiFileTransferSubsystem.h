#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "NetImguiFileTransferSubsystem.generated.h"

UCLASS(Blueprintable)
class NETIMGUI_API UNetImguiFileTransferSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UNetImguiFileTransferSubsystem();

};

