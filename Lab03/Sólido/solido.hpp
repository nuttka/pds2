#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Solid{
    public:
        double raio;
        double altura;
        double larguraBase;
        std::string tipoSolido;

	public:
		const double pi = 3.14;
        Solid(double raio, double altura, double larguraBase, std::string tipoSolido);
        virtual std::string getType();
        virtual double getVolume();
        virtual double getArea();
};

class Cylinder : public Solid{
	public:
        Cylinder(double raio, double altura, double larguraBase, std::string tipoSolido);
        std::string getType() override;
        double getVolume() override;
        double getArea() override;
};

class Sphere : public Solid{
	public:
        Sphere(double raio, double altura, double larguraBase, std::string tipoSolido);
        std::string getType() override;
        double getVolume() override;
        double getArea() override;
};

class Cube : public Solid{
	public:
        Cube(double raio, double altura, double larguraBase, std::string tipoSolido);
        std::string getType() override;
        double getVolume() override;
        double getArea() override;
};

#endif