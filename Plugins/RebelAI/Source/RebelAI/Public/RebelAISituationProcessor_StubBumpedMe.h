#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "RebelAISituationProcessor.h"
#include "RebelAISituationProcessor_StubBumpedMe.generated.h"

class AActor;
class UCapsuleComponent;
class UPrimitiveComponent;
class URebelAIStub;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELAI_API URebelAISituationProcessor_StubBumpedMe : public URebelAISituationProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCapsuleComponent> InstigatorCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URebelAIStub> InstigatorPtr;
    
public:
    URebelAISituationProcessor_StubBumpedMe();

protected:
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

