#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MetaHumanIdentityPart.generated.h"

UCLASS(Abstract, Blueprintable)
class METAHUMANIDENTITY_API UMetaHumanIdentityPart : public UObject {
    GENERATED_BODY()
public:
    UMetaHumanIdentityPart();

    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DiagnosticsIndicatesProcessingIssue(FText& OutDiagnosticsWarningMessage) const;
    
};

