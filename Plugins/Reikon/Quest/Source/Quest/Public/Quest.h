#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StructUtils/InstancedStruct.h"
#include "UObject/Object.h"
#include "StringTableSupportInterface.h"
#include "ENewQuestType.h"
#include "EObjectiveDayPhase.h"
#include "EQuestState.h"
#include "Mappin.h"
#include "Objective.h"
#include "QuestEndingDescription.h"
#include "Quest.generated.h"

class UQuest;
class UQuestMappinReference;

UCLASS(Blueprintable)
class QUEST_API UQuest : public UObject, public IStringTableSupportInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InitialQuestDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestEndingDescription> EndingDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENewQuestType NewType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMappin StartSpotMappin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestMappinReference* StartSpotMappinReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjectiveDayPhase DayPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObjective> Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> Extensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ChosenQuestEnding;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UQuest* QuestAssetPtr;
    
public:
    UQuest();

    UFUNCTION(BlueprintCallable)
    TArray<FObjective> SortObjectivesByTimeRevealed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveExisting(const FGuid& Guid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FObjective GetObjectiveBy(const FGuid& Guid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetChosenQuestEndingDescription(FText& OutDescription);
    
    UFUNCTION(BlueprintCallable)
    void DebugLogQuestIds();
    

    // Fix for true pure virtual functions not being implemented
};

