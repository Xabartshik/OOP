// ������ ��� ���� ��������� ����
#include <string>
#include "WarPlanesDescription.h"
//����������� ������
WarPlanesDescription::WarPlanesDescription() {
    setBombAttachmentType("");
    setMaxBombLoad(0);
    setBombTypes("");
    setMaxBombCount(0);
};

//����������� ����������� :
WarPlanesDescription::WarPlanesDescription(const WarPlanesDescription& other) {
    bombAttachmentType = other.bombAttachmentType;
    maxBombLoad = other.maxBombLoad;
    bombTypes = other.bombTypes;
    maxBombCount = other.maxBombCount;
}
// �������� ������������ ������������
WarPlanesDescription& WarPlanesDescription::operator=(const WarPlanesDescription& other) {
    if (this != &other) {
        bombAttachmentType = other.bombAttachmentType;
        maxBombLoad = other.maxBombLoad;
        bombTypes = other.bombTypes;
        maxBombCount = other.maxBombCount;
    }
    return *this;
}
// ����������� �����������
WarPlanesDescription::WarPlanesDescription(WarPlanesDescription&& other)
{
    bombAttachmentType = move(other.bombAttachmentType);
    maxBombLoad = other.maxBombLoad;
    bombTypes = move(other.bombTypes);
    maxBombCount = other.maxBombCount;

    other.clear();

}
// �������� ������������ ������������

WarPlanesDescription& WarPlanesDescription::operator=(WarPlanesDescription&& other) {
if (this != &other) {
    bombAttachmentType = move(other.bombAttachmentType);
    maxBombLoad = other.maxBombLoad;
    bombTypes = move(other.bombTypes);
    maxBombCount = other.maxBombCount;

    other.clear();
    }
return *this;
}


//����������� � �����������
WarPlanesDescription::WarPlanesDescription(string attachmentType, unsigned int maxLoad, string types, unsigned int maxCount) {
    bombAttachmentType = attachmentType;
    maxBombLoad = maxLoad;
    bombTypes = types;
    maxBombCount = maxCount;
}
//������� �������� �����
void WarPlanesDescription::clear()
{
    setBombAttachmentType("");
    setMaxBombLoad(0);
    setBombTypes("");
    setMaxBombCount(0);
}
void WarPlanesDescription::setBombAttachmentType(const string& attachmentType) {
    bombAttachmentType = attachmentType;
}

// ������ ��� ���� ��������� ����
const string& WarPlanesDescription::getBombAttachmentType() const {
    return bombAttachmentType;
}

// ������ ��� ������������ �������� ��������
void WarPlanesDescription::setMaxBombLoad(unsigned int newMaxBombLoad) {
    maxBombLoad = newMaxBombLoad;
}

// ������ ��� ������������ �������� ��������
unsigned int WarPlanesDescription::getMaxBombLoad() const {
    return maxBombLoad;
}

// ������ ��� ����� ����
void WarPlanesDescription::setBombTypes(const string& newBombTypes) {
    bombTypes = newBombTypes;
}

// ������ ��� ����� ����
const string& WarPlanesDescription::getBombTypes() const {
    return bombTypes;
}

// ������ ��� ������������� ���������� ����
void WarPlanesDescription::setMaxBombCount(unsigned int newMaxBombCount) {
    maxBombCount = newMaxBombCount;
}

// ������ ��� ������������� ���������� ����
unsigned int WarPlanesDescription::getMaxBombCount() const {
    return maxBombCount;
}
// ����� ��� ��������� ���� ����� ������ � ���� ������
string WarPlanesDescription::toStringBomber() const {
    std::string result;

    result += "��� ��������� ����: " + bombAttachmentType + "; ";
    result += "������������ �������� ��������: " + to_string(maxBombLoad) + "; ";
    result += "���� ����: " + bombTypes + "; ";
    result += "������������ ���������� ����: " + to_string(maxBombCount) + "; ";

    return result;
}