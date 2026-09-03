#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"
#include "DogwoodAnimNotifyState_TimedNiagaraBloodEffectAdvanced.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODANIM_API UDogwoodAnimNotifyState_TimedNiagaraBloodEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffectAdvanced {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* OriginalTemplate;
    
public:
    UDogwoodAnimNotifyState_TimedNiagaraBloodEffectAdvanced();

};

