#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "SaveGameInterface.h"
#include "ENewQuestType.h"
#include "EQuestState.h"
#include "Journal.generated.h"

class UQuest;

UCLASS(Blueprintable)
class QUEST_API UJournal : public UObject, public ISaveGameInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UQuest*> OpenedQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UQuest*> FinishedQuests;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UQuest> TrackedQuests[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TrackedObjectiveGuids[2];
    
public:
    UJournal();

    UFUNCTION(BlueprintCallable)
    bool TrackQuestObjective(UQuest* QuestToTrack, const FGuid& ObjectiveToTrack);
    
    UFUNCTION(BlueprintCallable)
    bool TrackQuest(UQuest* QuestToTrack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveTimeTracked(const FGuid& ObjectiveID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuest* GetTrackedQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetTrackedObjectiveGuid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuest* GetTrackedMainQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetTrackedMainObjectiveGuid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGuid> GetTrackableObjectiveGuids(const UQuest* FromQuest) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTrackableObjectiveCount(const UQuest* FromQuest) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetQuests(EQuestState State, TArray<UQuest*>& OutQuests) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOpenedQuestsOfNewType(ENewQuestType Type, TArray<UQuest*>& OutQuests) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOpenedQuests(TArray<UQuest*>& OutQuests) const;
    
    UFUNCTION(BlueprintCallable)
    UQuest* FindQuestInstanceUsingAsset(const UQuest* QuestAssetPtr);
    

    // Fix for true pure virtual functions not being implemented
};

