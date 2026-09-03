#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NPCDefenseController.generated.h"

class UCombatConfig;

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UNPCDefenseController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombatConfig* Config;
    
public:
    UNPCDefenseController();

};

