#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "QuestHelperBlueprintLibrary.generated.h"

class UObject;
class UPaperSprite;
class UQuest;
class UQuestHelperImpl;

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestHelperBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQuestHelperBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void QuestPing(UQuestHelperImpl* QuestHelper, FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPaperSprite* GetQuestIcon(UObject* WorldContextObject, UQuest* Quest, bool IsTracked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetQuestCourtTag(UQuest* Quest);
    
};

