#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QuestSplinePath.generated.h"

class UQuestComponent;
class USplineComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API AQuestSplinePath : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestComponent* QuestComponent;
    
public:
    AQuestSplinePath(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineComponent* GetSplineComponent() const;
    
};

