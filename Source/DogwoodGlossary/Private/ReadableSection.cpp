#include "ReadableSection.h"

FReadableSection::FReadableSection() {
    this->SectionType = EReadableSectionType::None;
    this->Scale = 0.00f;
    this->Alignment = EReadableSectionAlignment::Left;
}

