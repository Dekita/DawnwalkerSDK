#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "CinematicNode.h"
#include "CinematicResponseLine.h"
#include "CinematicNode_Response.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UCinematicNode_Response : public UCinematicNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCinematicResponseLine> Responses;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CurrentVoiceSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentLineSpeakerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActiveResponseText;
    
public:
    UCinematicNode_Response();

private:
    UFUNCTION(BlueprintCallable)
    void OnVoicePlaybackStarted(const FGuid& LineGuid);
    
    UFUNCTION(BlueprintCallable)
    void OnVoicePlaybackFinished(const FGuid& LineGuid);
    
    UFUNCTION(BlueprintCallable)
    void OnResponsePlayerFinished();
    
};

