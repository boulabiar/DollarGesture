#include <iostream>
#include "lib/GeometricRecognizer.h"
#include "lib/PathWriter.h"
using namespace std;
using namespace DollarRecognizer;

Path2D sampleGest()
{
    Path2D path;
    path.push_back(Point2D(68,222));
    path.push_back(Point2D(70,220));
    path.push_back(Point2D(73,218));
    path.push_back(Point2D(75,217));
    path.push_back(Point2D(77,215));
    path.push_back(Point2D(80,213));
    path.push_back(Point2D(82,212));
    path.push_back(Point2D(84,210));
    path.push_back(Point2D(87,209));
    path.push_back(Point2D(89,208));
    path.push_back(Point2D(92,206));
    path.push_back(Point2D(95,204));
    path.push_back(Point2D(101,201));
    path.push_back(Point2D(106,198));
    path.push_back(Point2D(112,194));
    path.push_back(Point2D(118,191));
    path.push_back(Point2D(124,187));
    path.push_back(Point2D(127,186));
    path.push_back(Point2D(132,183));
    path.push_back(Point2D(138,181));
    path.push_back(Point2D(141,180));
    path.push_back(Point2D(146,178));
    path.push_back(Point2D(154,173));
    path.push_back(Point2D(159,171));
    path.push_back(Point2D(161,170));
    path.push_back(Point2D(166,167));
    path.push_back(Point2D(168,167));
    path.push_back(Point2D(171,166));
    path.push_back(Point2D(174,164));
    path.push_back(Point2D(177,162));
    path.push_back(Point2D(180,160));
    path.push_back(Point2D(182,158));
    path.push_back(Point2D(183,156));
    path.push_back(Point2D(181,154));
    path.push_back(Point2D(178,153));
    path.push_back(Point2D(171,153));
    path.push_back(Point2D(164,153));
    path.push_back(Point2D(160,153));
    path.push_back(Point2D(150,154));
    path.push_back(Point2D(147,155));
    path.push_back(Point2D(141,157));
    path.push_back(Point2D(137,158));
    path.push_back(Point2D(135,158));
    path.push_back(Point2D(137,158));
    path.push_back(Point2D(140,157));
    path.push_back(Point2D(143,156));
    path.push_back(Point2D(151,154));
    path.push_back(Point2D(160,152));
    path.push_back(Point2D(170,149));
    path.push_back(Point2D(179,147));
    path.push_back(Point2D(185,145));
    path.push_back(Point2D(192,144));
    path.push_back(Point2D(196,144));
    path.push_back(Point2D(198,144));
    path.push_back(Point2D(200,144));
    path.push_back(Point2D(201,147));
    path.push_back(Point2D(199,149));
    path.push_back(Point2D(194,157));
    path.push_back(Point2D(191,160));
    path.push_back(Point2D(186,167));
    path.push_back(Point2D(180,176));
    path.push_back(Point2D(177,179));
    path.push_back(Point2D(171,187));
    path.push_back(Point2D(169,189));
    path.push_back(Point2D(165,194));
    path.push_back(Point2D(164,196));

    return path;
}

int main()
{
    GeometricRecognizer g;
    g.loadTemplates();

    // Sub-list of templates to search inside, should end by a "0"
    string gesturesList[] = {"Circle", "Delete", "Arrow", "0"};
    g.activateTemplates(gesturesList);

    RecognitionResult r=g.recognize(sampleGest());

    cout << "Recognized gesture: " << r.name << endl;
    cout << "Score:" << r.score << endl;
    return 0;
}
