#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "JaliCharacter.generated.h"

class UJaliAnimationComponent;

UCLASS(Blueprintable)
class JALI_API AJaliCharacter : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UJaliAnimationComponent* JaliAnimation;
    
    AJaliCharacter(const FObjectInitializer& ObjectInitializer);

};

