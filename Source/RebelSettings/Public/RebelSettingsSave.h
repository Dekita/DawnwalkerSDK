#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "RebelSettingsSave.generated.h"

UCLASS(Blueprintable)
class REBELSETTINGS_API URebelSettingsSave : public ULocalPlayerSaveGame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FString, float> SavedSettings;
    
public:
    URebelSettingsSave();

};

