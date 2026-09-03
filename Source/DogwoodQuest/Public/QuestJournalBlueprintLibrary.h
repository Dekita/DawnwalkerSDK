#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "QuestJournalBlueprintLibrary.generated.h"

class UObject;
class UQuest;
class UQuestJournalInterface;

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestJournalBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQuestJournalBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static bool IsQuestFinished(const UObject* InWorldContextObject, const UQuest* InQuestAsset, bool bSuccessfulOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static bool IsQuestActive(const UObject* InWorldContextObject, const UQuest* InQuestAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UQuest* GetQuestByID(UQuestJournalInterface* QuestJournalInterface, const FGuid& InGuid);
    
};

