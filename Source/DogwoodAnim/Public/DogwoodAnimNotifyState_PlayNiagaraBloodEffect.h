#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_PlayNiagaraEffect.h"
#include "DogwoodAnimNotifyState_PlayNiagaraBloodEffect.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable, CollapseCategories)
class DOGWOODANIM_API UDogwoodAnimNotifyState_PlayNiagaraBloodEffect : public UAnimNotify_PlayNiagaraEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* OriginalTemplate;
    
public:
    UDogwoodAnimNotifyState_PlayNiagaraBloodEffect();

};

