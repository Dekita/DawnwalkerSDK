#pragma once
#include "CoreMinimal.h"
#include "MetaHumanIdentityPart.h"
#include "MetaHumanIdentityBody.generated.h"

UCLASS(Blueprintable)
class METAHUMANIDENTITY_API UMetaHumanIdentityBody : public UMetaHumanIdentityPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BodyTypeIndex;
    
    UMetaHumanIdentityBody();

};

