#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameStateBase.h"
#include "Objective.h"
#include "OnQuestAddedMulticastDelegateDelegate.h"
#include "OnQuestEndedMulticastDelegateDelegate.h"
#include "OnQuestObjectiveUpdatedMulticastDelegateDelegate.h"
#include "OnQuestTrackedMulticastDelegateDelegate.h"
#include "OnQuestUpdatedMulticastDelegateDelegate.h"
#include "DawnwalkerGameStateBase.generated.h"

class UCommunityRespawnServiceInterface;
class UCommunitySystemInterface;
class UGameplayVisibilitySubsystem;
class UJournal;
class UQuest;
class UTimeSystemInterface;

UCLASS(Blueprintable)
class DAWNWALKER_API ADawnwalkerGameStateBase : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UJournal* QuestJournal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestAddedMulticastDelegate OnQuestAddedMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestUpdatedMulticastDelegate OnQuestUpdatedMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestObjectiveUpdatedMulticastDelegate OnQuestObjectiveUpdatedMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestTrackedMulticastDelegate OnQuestTrackedMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestEndedMulticastDelegate OnQuestEndedMulticastDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommunitySystemInterface* CommunitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommunityRespawnServiceInterface* RespawnService;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayVisibilitySubsystem* VisibilitySubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTimeSystemInterface* TimeSystem;
    
public:
    ADawnwalkerGameStateBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnQuestUpdated(const UQuest* Quest, bool bSilent);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestTracked(const UQuest* Quest, const FGuid& ObjectiveGuid, bool bSilent);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestObjectiveUpdated(const UQuest* Quest, const FObjective& Objective, bool bSilent);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestEnded(const UQuest* Quest, bool bSilent);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestAdded(const UQuest* Quest, bool bSilent);
    
};

