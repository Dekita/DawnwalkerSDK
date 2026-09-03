#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionsController.h"
#include "DawnwalkerAIReactionsController.generated.h"

class AActor;
class UCinematicSubsystem;
class UGameplayVisibilitySubsystem;
class URebelAIStub;

UCLASS(Blueprintable)
class DAWNWALKER_API UDawnwalkerAIReactionsController : public URebelAIReactionsController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCinematicSubsystem* CinematicSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayVisibilitySubsystem* GameplayVisibilitySubsystem;
    
public:
    UDawnwalkerAIReactionsController();

private:
    UFUNCTION(BlueprintCallable)
    void OnHitDetected(URebelAIStub* AIStub, AActor* Target);
    
};

