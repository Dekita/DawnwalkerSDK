#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CommunityObject.h"
#include "CombatArena.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable)
class POPULATION_API ACombatArena : public ACommunityObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
public:
    ACombatArena(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationInside(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorInside(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetClosestPointInside(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCenter() const;
    
};

