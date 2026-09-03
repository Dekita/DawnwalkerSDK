#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffectSpec.h"
#include "RuntimePersistentEffectData.generated.h"

class UDogwoodPersistentGEComponent;

USTRUCT(BlueprintType)
struct DOGWOODABILITYSYSTEM_API FRuntimePersistentEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayEffectSpec Spec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle ActiveGameplayEffectHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDogwoodPersistentGEComponent* PersistentEffectComp;
    
    FRuntimePersistentEffectData();
};

