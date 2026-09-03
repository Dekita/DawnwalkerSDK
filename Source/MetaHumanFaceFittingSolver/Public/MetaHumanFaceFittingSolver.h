#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MetaHumanFaceFittingSolver.generated.h"

class UMetaHumanConfig;
class UMetaHumanFaceAnimationSolver;

UCLASS(Blueprintable)
class METAHUMANFACEFITTINGSOLVER_API UMetaHumanFaceFittingSolver : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDeviceConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaHumanConfig* DeviceConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaHumanFaceAnimationSolver* FaceAnimationSolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaHumanConfig* PredictiveSolver;
    
    UMetaHumanFaceFittingSolver();

};

