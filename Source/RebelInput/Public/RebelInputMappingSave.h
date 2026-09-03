#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "InputCoreTypes.h"
#include "RebelInputMappingSave.generated.h"

UCLASS(Blueprintable)
class REBELINPUT_API URebelInputMappingSave : public ULocalPlayerSaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, FKey> SavedKeyboardBindings;
    
public:
    URebelInputMappingSave();

};

