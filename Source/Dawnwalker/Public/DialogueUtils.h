#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DialogueUtils.generated.h"

class ADawnwalkerPlayerCharacter;
class ADawnwalkerPlayerControllerBase;
class UObject;

UCLASS(Blueprintable)
class DAWNWALKER_API UDialogueUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDialogueUtils();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ADawnwalkerPlayerCharacter* K2_GetPlayer(UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ADawnwalkerPlayerControllerBase* K2_GetDawnwalkerPlayerController(UObject* WorldContextObject);
    
};

