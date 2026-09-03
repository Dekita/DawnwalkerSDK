#pragma once
#include "CoreMinimal.h"
#include "MetaHumanMeshData.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCORE_API FMetaHumanMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FaceMeshVertData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TeethMeshVertData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> LeftEyeMeshVertData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RightEyeMeshVertData;
    
    FMetaHumanMeshData();
};

