#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Tracks/IMovieSceneTransformOrigin.h"
#include "CameraDialogueSetSettings.h"
#include "DialogueMovieSetAdjustments.h"
#include "SpeakerSlot.h"
#include "DialogueMovieSet.generated.h"

class UDialogueMovieSetPreset;
class USceneComponent;

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API ADialogueMovieSet : public AActor, public IMovieSceneTransformOrigin {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDialogueMovieSetPreset> Preset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueMovieSetAdjustments Adjustments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpeakerSlot> SlotsA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpeakerSlot> SlotsB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraDialogueSetSettings> CameraSets;
    
public:
    ADialogueMovieSet(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetSlotGuid(const FString& DisplayName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetSlotDisplayNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSlotDisplayName(const FGuid& Guid) const;
    

    // Fix for true pure virtual functions not being implemented
};

