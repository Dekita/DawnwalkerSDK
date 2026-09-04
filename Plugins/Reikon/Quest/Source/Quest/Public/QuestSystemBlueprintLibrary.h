#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "QuestSystemBlueprintLibrary.generated.h"

class UFactsDB;
class UJournal;
class UQuestOwnerInfo;
class UQuestSketch;
class UQuestSystemInterface;

UCLASS(Blueprintable)
class QUEST_API UQuestSystemBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQuestSystemBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void StartSketch(UQuestSystemInterface* QuestSystemInterface, TSubclassOf<UQuestSketch> QuestClass, UQuestOwnerInfo* OwnerInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UJournal* GetJournal(UQuestSystemInterface* QuestSystemInterface);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFactsDB* GetFactsDB(UQuestSystemInterface* QuestSystemInterface);
    
};

