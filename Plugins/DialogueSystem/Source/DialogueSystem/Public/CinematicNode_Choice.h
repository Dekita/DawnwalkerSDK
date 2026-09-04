#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TimerHandle.h"
#include "CinematicChoiceLine.h"
#include "CinematicNode.h"
#include "EChoiceAvailability.h"
#include "TimedChoiceData.h"
#include "CinematicNode_Choice.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UCinematicNode_Choice : public UCinematicNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCinematicChoiceLine> Choices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGuid> UsedChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimedChoiceData TimedChoiceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFullscreenChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ChoiceTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimedChoiceEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimedChoiceDuration;
    
    UCinematicNode_Choice();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChoiceUsed(const FGuid& ChoiceGuid) const;
    
    UFUNCTION(BlueprintCallable)
    float GetRemainingTimePercentage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EChoiceAvailability GetAvailability(const FGuid& ChoiceGuid) const;
    
};

