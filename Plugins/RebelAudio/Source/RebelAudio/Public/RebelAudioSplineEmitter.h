#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "RebelAudioSplineEmitter.generated.h"

class URWAudioComponent;

UCLASS(Blueprintable)
class REBELAUDIO_API ARebelAudioSplineEmitter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallbackSplineTubeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineTubeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector3f> SplineTubePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox3f SplineBounds;
    
private:
public:
    ARebelAudioSplineEmitter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSplineTubeRadius(float Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerLeftProximity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerEnteredProximity();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSplineActive() const;
    
};

