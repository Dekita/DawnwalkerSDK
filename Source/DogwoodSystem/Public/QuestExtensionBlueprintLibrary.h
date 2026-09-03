#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "QuestExtensionBlueprintLibrary.generated.h"

class UObject;
class UQuest;

UCLASS(Blueprintable)
class DOGWOODSYSTEM_API UQuestExtensionBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQuestExtensionBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static uint8 GetQuestLevelRequirement(const UObject* InWorldContext, const UQuest* TargetQuest);
    
};

