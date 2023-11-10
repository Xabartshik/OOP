#pragma once
#include <string>
using namespace std;
///������� �����, ���-22
//�����, ���, ��������, ������, ���������, ����� ������, ������, ����.���, �������� ������, ��� ������, ���-�� �������
class PlanesDescription {
private:
	///��������������� ����� ��������
	string ID;
	///�������� ��������(���� ����� ��� ������)
	string planeType;
	///������������ �������� �������� (��� ����������� ��������)
	double maxSpeed;
	///������������ ������ ������ �������� (��� ����������� ��������)
	unsigned maxHeight;
	///������������ ��������� ������ �������� (��� ����������� ��������)
	unsigned maxDistance;
	///�������� ����� ��������
	unsigned takeoffWeight;
	//������ ��������
	unsigned short crew;
	///������������ �������� �������� 
	unsigned maxWeight;
    ///�������� ������
    double enginePower;
    ///��� ������
    string engineType;
    ///����� ����������
    unsigned short engineNumber;



    ///��������������� ����� ��������
    string ID;
    ///�������� ��������(���� ����� ��� ������)
    string planeType;
    ///������������ �������� �������� (��� ����������� ��������)
    double maxSpeed;
    ///������������ ������ ������ �������� (��� ����������� ��������)
    unsigned maxHeight;
    ///������������ ��������� ������ �������� (��� ����������� ��������)
    unsigned maxDistance;
    ///�������� ����� ��������
    unsigned takeoffWeight;
    //������ ��������
    unsigned short crew;
    ///������������ �������� �������� 
    unsigned maxWeight;
    ///�������� ������
    double enginePower;
    ///��� ������
    string engineType;
    ///����� ����������
    unsigned short engineNumber;

public:

    /// ������ �����������
    PlanesDescription();

    /// ����������� � �����������
    PlanesDescription(const string& newID, const string& newPlaneType, double newMaxSpeed, double newMaxHeight,
        double newMaxDistance, double newTakeoffWeight, double newMaxWeight, unsigned short newCrew, unsigned short newEngineNumber,
        const string& newEngineType, double newEnginePower);
    //����������� ����������� :
    PlanesDescription(const PlanesDescription& other);
    // �������� ������������ ������������
    PlanesDescription& operator=(const PlanesDescription& other);
    // ����������� �����������
    PlanesDescription(PlanesDescription&& other);
    // �������� ������������ ������������
    PlanesDescription& operator=(PlanesDescription&& other);


    //�������� �����
    void clear();
    // ������ ��� ���������������� ������ ��������
    string getID() const;
    // ������ ��� ���������������� ������ ��������
    void setID(const string& newID);

    // ������ ��� �������� ��������
    string getPlaneType() const;
    // ������ ��� �������� ��������
    void setPlaneType(const string& newPlaneType);

    // ������ ��� ������������ �������� ��������
    double getMaxSpeed() const;
    // ������ ��� ������������ �������� ��������
    void setMaxSpeed(double newMaxSpeed);

    // ������ ��� ������������ ������ ������ ��������
    unsigned getMaxHeight() const;
    // ������ ��� ������������ ������ ������ ��������
    void setMaxHeight(unsigned newMaxHeight);

    // ������ ��� ������������ ��������� ������ ��������
    unsigned getMaxDistance() const;
    // ������ ��� ������������ ��������� ������ ��������
    void setMaxDistance(unsigned newMaxDistance);

    // ������ ��� �������� ����� ��������
    unsigned getTakeoffWeight() const;
    // ������ ��� �������� ����� ��������
    void setTakeoffWeight(unsigned newTakeoffWeight);

    // ������ ��� ���������� ������ �������
    unsigned short getCrew() const;
    // ������ ��� ���������� ������ �������
    void setCrew(unsigned short newCrew);

    // ������ ��� ������������ �������� ��������
    unsigned getMaxWeight() const;
    // ������ ��� ������������ �������� ��������
    void setMaxWeight(unsigned newMaxWeight);

    // ������ ��� �������� ������
    void setEnginePower(double power);
    // ������ ��� �������� ������
    double getEnginePower() const;

    // ������ ��� ���� ������
    void setEngineType(const string& type);
    // ������ ��� ���� ������
    const string& getEngineType() const;

    // ������ ��� ����� ����������
    void setEngineNumber(unsigned short newEngineNumber);
    // ������ ��� ����� ����������
    unsigned short getEngineNumber() const;

    // ����� ��� ��������� ���� ����� ������ � ���� ������
    string toStringPlane();
};

