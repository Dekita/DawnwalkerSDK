#pragma once
#include "CoreMinimal.h"
#include "RebelAIStub.h"
#include "RebelBypassInterface.h"
#include "DogwoodAIStub.generated.h"

class UCapsuleComponent;
class UCombatComponentBase;
class UCombatSubsystem;

UCLASS(Blueprintable)
class DOGWOODAI_API UDogwoodAIStub : public URebelAIStub, public IRebelBypassInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCombatComponentBase> CombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCombatSubsystem> CombatSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCapsuleComponent> Capsule;
    
public:
    UDogwoodAIStub();


    // Fix for true pure virtual functions not being implemented
};

