#pragma once
#include "ClassAdd.h"
#include <string>
///������� �����, ���-22
using namespace std;
//�������, ��� ���������, �������� ����, ���� ����, ���-�� ����
class WarPlanesDescription : public PlanesDescription
{
private:
    // ��� ��������� ����
    string bombAttachmentType;
    // ������������ �������� ��������
    unsigned int maxBombLoad; 
    // ���� ����
    string bombTypes; 
    // ������������ ���������� ����
    unsigned int maxBombCount; 


public:
    //����������� � ����������� (������)
    WarPlanesDescription(const string& newID, const string& newPlaneType, double newMaxSpeed, double newMaxHeight,
        double newMaxDistance, double newTakeoffWeight, double newMaxWeight, unsigned short newCrew, unsigned short newEngineNumber,
        const string& newEngineType, double newEnginePower, const string& newBombAttachmentType,
        unsigned int newMaxBombLoad, const string& newBombTypes, unsigned int newMaxBombCount);




    //����������� ������
    WarPlanesDescription();

    //����������� � �����������
    WarPlanesDescription(string attachmentType, unsigned int maxLoad, string types, unsigned int maxCount);



    //����������� ����������� :
    WarPlanesDescription(const WarPlanesDescription& other);
    // �������� ������������ ������������
    WarPlanesDescription& operator=(const WarPlanesDescription& other);
    // ����������� �����������
    WarPlanesDescription(WarPlanesDescription&& other);
    // �������� ������������ ������������
    WarPlanesDescription& operator=(WarPlanesDescription&& other);
    //�������� �����
    void clear();
    // ������ ��� ���� ��������� ����
    void setBombAttachmentType(const string& attachmentType);

    // ������ ��� ���� ��������� ����
    const string& getBombAttachmentType() const;

    // ������ ��� ������������ �������� ��������
    void setMaxBombLoad(unsigned int maxBombLoad);

    // ������ ��� ������������ �������� ��������
    unsigned int getMaxBombLoad() const;

    // ������ ��� ����� ����
    void setBombTypes(const string& bombTypes);

    // ������ ��� ����� ����
    const string& getBombTypes() const;

    // ������ ��� ������������� ���������� ����
    void setMaxBombCount(unsigned int maxBombCount);
    // ������ ��� ������������� ���������� ����
    unsigned int getMaxBombCount() const;

    // ����� ��� ��������� ���� ����� ������ � ���� ������
    string toStringBomber() const;
};

