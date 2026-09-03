#pragma once
#include "CoreMinimal.h"
#include "EJaliTTSInputs.generated.h"

UENUM(BlueprintType)
enum class EJaliTTSInputs : uint8 {
    None = 0,
    polly_csv = 1,
    polly_json = 8,
    azure_json,
    resemble_json,
    kaldi_json,
    elevenlabs_json,
    cereproc = 2,
    cereproc_csv,
    ipa_csv = 5,
    xsampa_csv,
    cmu_csv,
};

