#pragma once
#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "Templates/SubclassOf.h"
#include "ActionPreviewActorComponent.generated.h"

class UActionSlotComponent;
class UCommunityNPCDefinitionBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POPULATION_API UActionPreviewActorComponent : public UChildActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommunityNPCDefinitionBase> PreviewNPCDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionSlotComponent* ParentActionSlot;
    
    UActionPreviewActorComponent(const FObjectInitializer& ObjectInitializer);

};

