#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RebelFramegenSettings.generated.h"

UCLASS(Blueprintable, ConfigDoNotCheckDefaults, Config=GameUserFramegen)
class REBELFRAMEGENINITMODULE_API URebelFramegenSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Provider;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Mode;
    
    URebelFramegenSettings();

};

