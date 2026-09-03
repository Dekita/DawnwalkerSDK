#pragma once
#include "CoreMinimal.h"
#include "RebelAIControllerBase.h"
#include "RebelAICombatController.generated.h"

class URebelAIStub;

UCLASS(Blueprintable)
class REBELAI_API URebelAICombatController : public URebelAIControllerBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterDiedDelegate, URebelAIStub*, Victim, URebelAIStub*, Killer);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterDiedDelegate OnCharacterPreDeathDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterDiedDelegate OnCharacterDiedDelegate;
    
    URebelAICombatController();

};

