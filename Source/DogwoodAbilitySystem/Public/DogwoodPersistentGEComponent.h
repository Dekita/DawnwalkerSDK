#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectComponent.h"
#include "DogwoodPersistentGEComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODABILITYSYSTEM_API UDogwoodPersistentGEComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasWorldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLastsUntilEndOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Segments;
    
    UDogwoodPersistentGEComponent();

};

