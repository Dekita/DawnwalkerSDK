#pragma once
#include "CoreMinimal.h"
#include "EReadableSectionAlignment.h"
#include "EReadableSectionType.h"
#include "ReadableSection.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct DOGWOODGLOSSARY_API FReadableSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReadableSectionType SectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReadableSectionAlignment Alignment;
    
    FReadableSection();
};

