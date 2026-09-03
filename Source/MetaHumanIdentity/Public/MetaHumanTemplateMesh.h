#pragma once
#include "CoreMinimal.h"
#include "Components/DynamicMeshComponent.h"
#include "MetaHumanTemplateMesh.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class METAHUMANIDENTITY_API UMetaHumanTemplateMesh : public UDynamicMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaskPreset;
    
    UMetaHumanTemplateMesh(const FObjectInitializer& ObjectInitializer);

};

