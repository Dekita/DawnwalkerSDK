#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "JaliAnimationComponent.generated.h"

class UJaliAnimPlayer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class JALI_API UJaliAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UJaliAnimPlayer* AnimPlayer;
    
public:
    UJaliAnimationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UJaliAnimPlayer* GetAnimPlayer();
    
};

