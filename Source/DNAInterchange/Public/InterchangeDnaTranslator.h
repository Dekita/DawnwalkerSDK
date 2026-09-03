#pragma once
#include "CoreMinimal.h"
#include "InterchangeTranslatorBase.h"
#include "Mesh/InterchangeMeshPayloadInterface.h"
#include "InterchangeDnaTranslator.generated.h"

UCLASS(Blueprintable)
class DNAINTERCHANGE_API UInterchangeDnaTranslator : public UInterchangeTranslatorBase, public IInterchangeMeshPayloadInterface {
    GENERATED_BODY()
public:
    UInterchangeDnaTranslator();

    // IInterchangeMeshPayloadInterface: real implementation unknown (not reconstructable from reflection data).
    virtual TOptional<UE::Interchange::FMeshPayloadData> GetMeshPayloadData(const FInterchangeMeshPayLoadKey& PayLoadKey, const FTransform& MeshGlobalTransform) const override { return {}; }
};

