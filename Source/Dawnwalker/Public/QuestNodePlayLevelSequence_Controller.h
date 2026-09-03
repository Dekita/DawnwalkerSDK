#pragma once
#include "CoreMinimal.h"
#include "EFadeState.h"
#include "DWActorsBindingData.h"
#include "QuestNodeController.h"
#include "QuestNodePlayLevelSequence_Controller.generated.h"

class ALevelSequenceActor;
class ASpawnPoint;
class UCommunityBaseActivator;
class UDataTable;
class UEventLevelSequencePlayer;
class ULevelSequence;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodePlayLevelSequence_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* LoadedSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEventLevelSequencePlayer* SequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* GeneratedCommunity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommunityBaseActivator* CommunityActivator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* StoredLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDWActorsBindingData BindingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpawnPoint* SpawnPoint;
    
public:
    UQuestNodePlayLevelSequence_Controller();

protected:
    UFUNCTION(BlueprintCallable)
    void PerformFadeOutOnEnd() const;
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceStop();
    
    UFUNCTION(BlueprintCallable)
    void OnCameraFadeStateChange(EFadeState PreviousFadeState, EFadeState NextFadeState);
    
};

