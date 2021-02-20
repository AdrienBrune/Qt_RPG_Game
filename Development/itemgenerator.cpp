#include "itemgenerator.h"
#include <QDebug>

// MAX = 250 350 150 100 / 50 100

ItemGenerator::ItemGenerator()
{
    mSwords << new Sword("Épée rouillée\nbrisée", QPixmap(":/equipment/sword_0.png"), 5, 5, 10, 1, "Épée rouillée et cassée, globalement en très mavais état.")
            << new Sword("Épée rouillée", QPixmap(":/equipment/sword_1.png"), 10, 5, 10, 1, "Épée rouillée, globalement en très mavais état.")
            << new Sword("Épée courte", QPixmap(":/equipment/sword_2.png"), 55, 7, 10, 4, "Épée courte, manque de porté mais offre une maniabilité très intéressante.")
            << new Sword("Katana brisé", QPixmap(":/equipment/sword_3.png"), 20, 7, 10, 1, "Katana brisé, la lame est toujours aussi aiguisée.")
            << new Sword("Katana", QPixmap(":/equipment/sword_4.png"), 80, 8, 10, 21, "Arme de facture médiocre, la maniabilité est par contre exelente.")
            << new Sword("Katana maléfique", QPixmap(":/equipment/sword_5.png"), 230, 8, 40, 62, "Arme mystérieuse de très bonne qualité, la lame semble irigée de sang ce qui lui confère une aura maléfique des plus pesante.")
            << new Sword("Épée affutée", QPixmap(":/equipment/sword_6.png"), 60, 3, 10, 3, "Arme banale, elle rest néanmoins éfficace.")
            << new Sword("Épée de soldat", QPixmap(":/equipment/sword_7.png"), 45, 4, 10, 4, "Arme de faible qualité, arme réalisé massivement pour pouvoir armer une armée.")
            << new Sword("Dague de ninja", QPixmap(":/equipment/sword_8.png"), 50, 8, 10, 8, "Dague très d'apparat jolie, mais peu pratique en combat du fait de sa forme.")
            << new Sword("Épée de soldat", QPixmap(":/equipment/sword_9.png"), 70, 3, 10, 5, "Arme de faible qualité, arme réalisé massivement pour pouvoir armer une armée.")
            << new Sword("Dague de ninja", QPixmap(":/equipment/sword_10.png"), 110, 9, 10, 37, "Dague de bonne qualité, La lame bleu de cette dague est d'un bleu à faire plalir le ciel lui-même.")
            << new Sword("Dague médiocre", QPixmap(":/equipment/sword_11.png"), 50, 7, 10, 5, "Dague de mauvaise qualité, elle possède néanmoins la rapidité de maniement qu'on peut apprécier d'une dague.")
            << new Sword("Épée de boucher", QPixmap(":/equipment/sword_12.png"), 190, 2, 25, 16, "Épée de boucher qui saura aussi bien couper la viande que vos enemis.")
            << new Sword("Dague en acier", QPixmap(":/equipment/sword_13.png"), 60, 7, 10, 11, "Dague de qualité moyenne, elle saura s'avérer utile pour le combat.")
            << new Sword("Machette", QPixmap(":/equipment/sword_14.png"), 70, 7, 14, 12, "Machette efficace en toute situation, elle est néanmoins moins afutée qu'une épée normale mais confère une meilleur vitesse de maniement.")
            << new Sword("Dague en pierre", QPixmap(":/equipment/sword_15.png"), 50, 7, 10, 7, "Dague en pierre, arme rapide mais peu puissante qui sera plutôt fragile.")
            << new Sword("Épée en pierre", QPixmap(":/equipment/sword_16.png"), 110, 2, 20, 12, "Épée peu tranchante et plutôt lourde du fait de son matériaux de fabrication.")
            << new Sword("Épée artisanale", QPixmap(":/equipment/sword_17.png"), 160, 7, 10, 34, "Épée confectionnée sans garde, ce qui lui donne une apparence de machette. La maniabilté s'en retrouve aussi plus forte.");

    mHelmets << new Helmet("Toque en cuir", QPixmap(":/equipment/helmet_0.png"), 25, 5, 10, 8, "Armure banale fait avec un cuir de mauvais qualité.")
            << new Helmet("Capuche de voleur", QPixmap(":/equipment/helmet_1.png"), 150, 5, 10, 23, "Capuche avec une armure intégrée qui offre un surplus de résistance à l'équipement.")
            << new Helmet("Casque renforcé", QPixmap(":/equipment/helmet_2.png"), 220, 0, 20, 42, "Heaume très résistant de qualité supérieur. Attention tout de même car s'équiper d'un tel équipement réduit la visibilté et est lourd à porter.")
            << new Helmet("Casque artisanale", QPixmap(":/equipment/helmet_3.png"), 40, 0, 10, 3, "Casque artisanal rudimentaire peu solide qui offrira tout de même une première protection.")
            << new Helmet("Capuche", QPixmap(":/equipment/helmet_4.png"), 60, 10, 10, 34, "Capuche de rôdeur qui offre une bonne visibilté à défaut d'une grande résistance.")
            << new Helmet("Heaume de guerre", QPixmap(":/equipment/helmet_5.png"), 120, 1, 10, 6, "Heaume résistant fabriqué pour arpenter les champs de bataille.")
            << new Helmet("Heaume de guerre", QPixmap(":/equipment/helmet_6.png"), 180, 1, 10, 23, "Heaume résistant fabriqué pour arpenter les champs de bataille.")
            << new Helmet("Toque\nà fourrure", QPixmap(":/equipment/helmet_7.png"), 90, 3, 10, 12, "Toque légère fait en fourrure d'ours qui n'offre pas autant de résistance qu'un heaume fait de métal.")
            << new Helmet("Heaume de guerre", QPixmap(":/equipment/helmet_8.png"), 150, 1, 10, 17, "Heaume résistant fabriqué pour arpenter les champs de bataille.");

    mBreastplates << new Breastplate("Cuirasse usée", QPixmap(":/equipment/breastplate_0.png"), 40, 5, 10, 8, "Équipement fait avec un cuir de mauvais qualité.")
            << new Breastplate("Plastron\nde mercenaire", QPixmap(":/equipment/breastplate_1.png"), 220, 0, 10, 18, "Équipement renforcé de bonne qualité généralement utilisé par les mercenaires.")
            << new Breastplate("Plastron nordique", QPixmap(":/equipment/breastplate_2.png"), 120, 0, 10, 11, "Équipement utilisé par les guerriers nordiques. Offre une bonne résistance au froid en plus d'être résistant pour le combat.")
            << new Breastplate("Tunique\nde paysan", QPixmap(":/equipment/breastplate_3.png"), 20, 2, 10, 1, "Tunique rudimentaire de très mauvaise qualité.")
            << new Breastplate("Tunique\nde paysan", QPixmap(":/equipment/breastplate_4.png"), 30, 1, 10, 2, "Tunique rudimentaire très abordable.")
            << new Breastplate("Tunique\nde paysan", QPixmap(":/equipment/breastplate_5.png"), 40, 2, 10, 3, "Tunique rudimentaire en plutôt bon état.")
            << new Breastplate("Tunique\nde marchant", QPixmap(":/equipment/breastplate_6.png"), 50, 3, 10, 4, "Tunique de marchant abordable.")
            << new Breastplate("Cotte de maille", QPixmap(":/equipment/breastplate_7.png"), 100, 2, 10, 7, "Équipement fabriqué pour les champs de bataille. Particulièrement résistant contre les projectiles.")
            << new Breastplate("Plastron\nde guerre", QPixmap(":/equipment/breastplate_8.png"), 220, 0, 10, 28, "Équipement résistant fabriqué pour arpenter les champs de bataille.")
            << new Breastplate("Armure à plaques", QPixmap(":/equipment/breastplate_9.png"), 290, 0, 10, 48, "Équipement renforcé très résistant fabriqué pour arpenter les champs de bataille.")
            << new Breastplate("Plastron nordique", QPixmap(":/equipment/breastplate_10.png"), 170, 2, 10, 25, "Équipement utilisé par les guerriers nordiques. Offre une bonne résistance au froid en plus d'être résistant pour le combat.")
            << new Breastplate("Plastron nordique", QPixmap(":/equipment/breastplate_11.png"), 190, 0, 10, 27, "Équipement utilisé par les guerriers nordiques. Offre une bonne résistance au froid en plus d'être résistant pour le combat.")
            << new Breastplate("Plastron rudimentaire", QPixmap(":/equipment/breastplate_12.png"), 100, 0, 10, 1, "Équipement artisanal rudimentaire peu solide qui offrira tout de même une première protection.")
            << new Breastplate("Plastron à pointe", QPixmap(":/equipment/breastplate_13.png"), 270, 2, 10, 52, "Équipement de qualité supérieur. Armure confectionnée avec des matériaux supérieurs.")
            << new Breastplate("Cotte d'archer\nrenforcée", QPixmap(":/equipment/breastplate_14.png"), 170, 10, 10, 63, "Équipement léger et résistant. Cette combinaison en fait une armure vraiment intéressante")
            << new Breastplate("Cotte de guerrier", QPixmap(":/equipment/breastplate_15.png"), 70, 0, 10, 4, "Équipement confortable et de bonne qualité utilisé par les guerriers hors des champ de bataille.")
            << new Breastplate("Tunique décontracté", QPixmap(":/equipment/breastplate_16.png"), 50, 5, 10, 2, "Tunique de très bonne facture qui offre une très bonne liberté de mouvement au détriment d'une résistance pour le combat.")
            << new Breastplate("Plastron nordique", QPixmap(":/equipment/breastplate_17.png"), 120, 2, 10, 17, "Équipement utilisé par les guerriers nordiques. Offre une bonne résistance au froid en plus d'être résistant pour le combat.")
            << new Breastplate("Cotte d'archer", QPixmap(":/equipment/breastplate_18.png"), 100, 8, 10, 26, "Équipement léger et peu résistant privilégiant une très grande liberté de mouvement.")
            << new Breastplate("Cotte d'archer", QPixmap(":/equipment/breastplate_19.png"), 120, 8, 10, 31, "Équipement léger et peu résistant privilégiant une très grande liberté de mouvement.")
            << new Breastplate("Tunique de mage", QPixmap(":/equipment/breastplate_20.png"), 120, 8, 10, 24, "Équipement peu résistant qui semble renfermer une force mystique.")
            << new Breastplate("Plastron de général\nnordique", QPixmap(":/equipment/breastplate_21.png"), 280, 3, 10, 51, "")
            << new Breastplate("Tunique éclaireur", QPixmap(":/equipment/breastplate_22.png"), 120, 6, 10, 11, "Équipement utilisé par les éclaireur des armées. Léger, elle est pratique pour parcourir de longues distances.")
            << new Breastplate("Plastron blanc\nà écailles", QPixmap(":/equipment/breastplate_23.png"), 340, 2, 10, 71, "Équipement de guerre très résistant. Les écailles blanches de cette armure semblent aussi dures que le diamant.")
            << new Breastplate("Tunique d'éclaireur\nnordique", QPixmap(":/equipment/breastplate_24.png"), 160, 4, 10, 15, "Équipement utilisé par les éclaireur des armées nordiques. Il offre une résistance au froid et une grande liberté de mouvement au détriment de la défense.")
            << new Breastplate("Plastron nordique", QPixmap(":/equipment/breastplate_25.png"), 205, 0, 10, 23, "Équipement utilisé par les guerriers nordiques. Offre une bonne résistance au froid en plus d'être résistant pour le combat.")
            << new Breastplate("Plastron de\nla garde royale", QPixmap(":/equipment/breastplate_26.png"), 280, 0, 10, 42, "Équipement magnifique utilisant des matériaux aussi beau que résistant.")
            << new Breastplate("Tunique de\ntroubadour", QPixmap(":/equipment/breastplate_27.png"), 60, 4, 10, 4, "Équipement idéal pour tous voyageurs.")
            << new Breastplate("Plastron\nde chevalier", QPixmap(":/equipment/breastplate_28.png"), 310, 0, 10, 65, "Équipement résistant avec des motifs très détaillés prisé par les chevaliers.")
            << new Breastplate("Cotte d'officer", QPixmap(":/equipment/breastplate_29.png"), 140, 6, 10, 39, "Équipement d'officier de très bonne facture qui n'est aps conçu pour les combats en première ligne.")
            << new Breastplate("Plastron\nde chevalier", QPixmap(":/equipment/breastplate_30.png"), 320, 5, 10, 81, "Équipement magnifique et résistant prisé par les chevaliers.");

    mGloves << new Gloves("Brassards en cuir", QPixmap(":/equipment/gloves_0.png"), 15, 2, 10, 6, "Armure banale fait avec un cuir de mauvais qualité.")
            << new Gloves("Gants\nde mercenaire", QPixmap(":/equipment/gloves_1.png"), 60, 0, 10, 14, "Gants renforcés de bonne qualité généralement utilisé par les mercenaires.")
            << new Gloves("Gants de guerrier", QPixmap(":/equipment/gloves_2.png"), 50, 1, 10, 6, "Gants résistants assez léger fabriqués pour arpenter les champs de bataille.")
            << new Gloves("Gants en cuir\nrenforcés", QPixmap(":/equipment/gloves_3.png"), 30, 0, 10, 3, "Gants en cuir de qualité banale mais renforcés, ce qui offre une résistance supplémentaire.")
            << new Gloves("Gants renforcés", QPixmap(":/equipment/gloves_4.png"), 60, 0, 10, 8, "Gants offrant une bonne protection.")
            << new Gloves("Gants en lin", QPixmap(":/equipment/gloves_5.png"), 20, 2, 10, 5, "Gants réalisés avec un matériaux fragile.")
            << new Gloves("Gants de guerrier", QPixmap(":/equipment/gloves_6.png"), 80, 0, 15, 21, "Gants résistants assez lourds fabriqués pour arpenter les champs de bataille.")
            << new Gloves("Gants en cuir", QPixmap(":/equipment/gloves_7.png"), 40, 1, 10, 12, "Gants en cuir de bonne facture qui offre une bonne liberté de mouvement au détriment de la résistance.")
            << new Gloves("Brassards\nen acier", QPixmap(":/equipment/gloves_8.png"), 50, 2, 10, 9, "Brassards sculptés de très bonne qualité et résistants.")
            << new Gloves("Brassards\nen acier", QPixmap(":/equipment/gloves_9.png"), 50, 2, 10, 10, "Brassards de bonne qualité plutôt résistants.")
            << new Gloves("Gants d'éclaireur", QPixmap(":/equipment/gloves_10.png"), 30, 4, 10, 13, "Gants utilisés par les éclaireur des armées. Léger, ils sont pratiques pour parcourir de longues distances.")
            << new Gloves("Gants blancs\nà écailles", QPixmap(":/equipment/gloves_11.png"), 80, 2, 10, 26, "Gants de guerre très résistants. Les écailles blanches de cette armure semblent aussi dures que le diamant.");

    mPants << new Pant("Jupe en cuir", QPixmap(":/equipment/pant_0.png"), 15, 1, 10, 4, "Jupe banale fait avec un cuir de mauvais qualité.")
            << new Pant("Cuissards\nde mercenaire", QPixmap(":/equipment/pant_1.png"), 105, 0, 10, 12, "Cuissards renforcés de bonne qualité généralement utilisé par les mercenaires.")
            << new Pant("Tassette\nde guerrier", QPixmap(":/equipment/pant_2.png"), 90, 0, 10, 11, "Tasette résistante fabriquée pour arpenter les champs de bataille.")
            << new Pant("Jupe de paysan", QPixmap(":/equipment/pant_3.png"), 10, 0, 10, 1, "Jupe rudimentaire de très mauvaise qualité.")
            << new Pant("Jupe de paysan", QPixmap(":/equipment/pant_4.png"), 15, 0, 10, 2, "Jupe rudimentaire très abordable.")
            << new Pant("Jupe de paysan", QPixmap(":/equipment/pant_5.png"), 20, 0, 10, 3, "Jupe en plutôt bon état.")
            << new Pant("Jupe de marchant", QPixmap(":/equipment/pant_6.png"), 30, 0, 10, 4, "Jupe de marchant abordable.")
            << new Pant("Tasette en maille", QPixmap(":/equipment/pant_7.png"), 80, 0, 10, 7, "Tasette fabriquée pour les champs de bataille. Particulièrement résistante contre les projectiles.")
            << new Pant("Pantalon\nde paysan", QPixmap(":/equipment/pant_9.png"), 20, 0, 10, 2, "Pantalon en mauvais état.")
            << new Pant("Jupe décontractée", QPixmap(":/equipment/pant_10.png"), 30, 0, 10, 4, "Jupe de très bonne facture qui offre une très bonne liberté de mouvement au détriment d'une résistance pour le combat.")
            << new Pant("Tasette à plaques", QPixmap(":/equipment/pant_11.png"), 130, 0, 15, 17, "Tasette renforcée très résistante fabriquée pour arpenter les champs de bataille.")
            << new Pant("Tasette nordique", QPixmap(":/equipment/pant_12.png"), 110, 2, 10, 24, "Tasette utilisée par les guerriers nordiques. Offre une bonne résistance au froid en plus d'être résistante pour le combat.")
            << new Pant("Tasette majestueuse", QPixmap(":/equipment/pant_13.png"), 100, 8, 10, 34, "Tasette ornée de plume aussi noires qu'une nuit sans lune. Cet équipement une fois porté augmente grandement la mobilité.")
            << new Pant("Tasette de noble", QPixmap(":/equipment/pant_14.png"), 50, 4, 10, 36, "tasette très coloré souvent portée par les nobles pour se mettre en valeur.")
            << new Pant("Tasette nordique", QPixmap(":/equipment/pant_15.png"), 90, 2, 10, 15, "Tasette utilisée par les guerriers nordiques. Offre une bonne résistance au froid en plus d'être résistante pour le combat.")
            << new Pant("Tasette de la\ngarde royale", QPixmap(":/equipment/pant_16.png"), 120, 0, 10, 24, "Équipement magnifique utilisant des matériaux aussi beau que résistant.")
            << new Pant("Jupe en cuir", QPixmap(":/equipment/pant_17.png"), 40, 4, 10, 7, "Jupe banale fait avec un cuir de bonne qualité.")
            << new Pant("Pantalon\nde barbare", QPixmap(":/equipment/pant_18.png"), 90, 6, 10, 31, "Pantalon protégeant assez peu mais possèdent une aura barbaresque.")
            << new Pant("Tasette\nde chevalier", QPixmap(":/equipment/pant_19.png"), 130, 2, 10, 52, "Équipement magnifique et résistant prisé par les chevaliers.");

    mFootwears << new Footwears("Chaussures en cuir", QPixmap(":/equipment/footwears_0.png"), 10, 4, 10, 3, "Armure banale fait avec un cuir de mauvais qualité.")
            << new Footwears("Bottes\nde mercenaire", QPixmap(":/equipment/footwears_1.png"), 60, 0, 10, 9, "Bottes renforcées de bonne qualité généralement utilisées par les mercenaires.")
            << new Footwears("Bottes en cuir\nrenforcées", QPixmap(":/equipment/footwears_2.png"), 60, 0, 10, 7, "Bottes de moyenne qualité ayant été renforcées avec des plaques en acier pour offrir une résistance supplémentaire.")
            << new Footwears("Soleret de guerrier", QPixmap(":/equipment/footwears_3.png"), 50, 0, 10, 8, "Solerets en mauvais état fabriqués pour arpenter les champs de bataille.")
            << new Footwears("Bottes de noble", QPixmap(":/equipment/footwears_4.png"), 25, 2, 10, 15, "Bottes de très bonne facture mais peu utiles en combat.")
            << new Footwears("Bottes en cuir", QPixmap(":/equipment/footwears_5.png"), 15, 3, 10, 2, "Bottes en cuir de très mauvaise qualité.")
            << new Footwears("Bottes en cuir", QPixmap(":/equipment/footwears_6.png"), 30, 6, 10, 5, "Bottes en cuir de très bonne qualité.")
            << new Footwears("Soleret de guerrier", QPixmap(":/equipment/footwears_7.png"), 70, 0, 10, 9, "Solerets de qualité fabriqués pour arpenter les champs de bataille.")
            << new Footwears("Bottes en cuir", QPixmap(":/equipment/footwears_8.png"), 20, 3, 10, 3, "Bottes en cuir de moyenne qualité.")
            << new Footwears("Bottes en cuir", QPixmap(":/equipment/footwears_9.png"), 15, 3, 10, 2, "Bottes en cuir de mauvaise qualité.")
            << new Footwears("Bottes en cuir", QPixmap(":/equipment/footwears_10.png"), 30, 3, 10, 3, "Bottes en cuir de bonne qualité.")
            << new Footwears("Soleret de guerre", QPixmap(":/equipment/footwears_11.png"), 60, 0, 10, 11, "Solerets résistants fabriqués pour arpenter les champs de bataille.")
            << new Footwears("Soleret de guerrier", QPixmap(":/equipment/footwears_12.png"), 55, 0, 10, 10, "Solerets rudimentaires fabriqués pour arpenter les champs de bataille.")
            << new Footwears("Bottes nordiques", QPixmap(":/equipment/footwears_13.png"), 50, 2, 10, 8, "Bottes utilisée par les guerriers nordiques. Offre une bonne résistance au froid.")
            << new Footwears("Soleret de guerrier", QPixmap(":/equipment/footwears_14.png"), 80, 0, 20, 14, "Solerets en bon état fabriqués pour arpenter les champs de bataille.")
            << new Footwears("Soleret de guerrier", QPixmap(":/equipment/footwears_15.png"), 90, 0, 10, 17, "Solerets en très bon état fabriqués pour arpenter les champs de bataille.")
            << new Footwears("Soleret de la\ngarde royale", QPixmap(":/equipment/footwears_16.png"), 85, 2, 10, 22, "Solerets magnifiques ornementés d'un peu d'or et destinés à être portés par un noble.");

    mAmulets << new Amulet("Amulette", QPixmap(":/equipment/amulet_0.png"), 26, 2, 10, 21, "Amulette ornée d'une belle pierre violette.")
            << new Amulet("Anneau", QPixmap(":/equipment/amulet_1.png"), 5, 0, 10, 17, "Anneau basique.")
            << new Amulet("Anneau", QPixmap(":/equipment/amulet_2.png"), 7, 0, 10, 26, "Anneau orné d'une belle pierre rouge.")
            << new Amulet("Amulette\nen or", QPixmap(":/equipment/amulet_3.png"), 13, 0, 10, 21, "Amulette de bonne qualité.")
            << new Amulet("Anneau en or", QPixmap(":/equipment/amulet_4.png"), 7, 0, 10, 15, "Anneau de bonne qualité.")
            << new Amulet("Amulette", QPixmap(":/equipment/amulet_5.png"), 12, 0, 10, 8, "Amulette métalique de bonne qualité.")
            << new Amulet("Amulette", QPixmap(":/equipment/amulet_6.png"), 15, 2, 10, 34, "Amulette en or ornée de belles pierres précieuses.")
            << new Amulet("Amulette", QPixmap(":/equipment/amulet_8.png"), 22, 5, 10, 14, "Amulette mystérieuse.")
            << new Amulet("Dent de loup", QPixmap(":/equipment/amulet_9.png"), 6, 0, 10, 4, "Dent de loup mystérieuse.")
            << new Amulet("Collier d'os", QPixmap(":/equipment/amulet_10.png"), 4, 0, 10, 1, "Collier d'os basique.")
            << new Amulet("Amulette", QPixmap(":/equipment/amulet_11.png"), 10, 0, 10, 1, "Amulette basique.");
}

Sword * ItemGenerator::generateRandomSword()
{
    int r = qrand()%mSwords.length();
    Sword * sword = new Sword(mSwords[r]->getName(), mSwords[r]->getImage(), mSwords[r]->getDamage(), mSwords[r]->getSpeed(), mSwords[r]->getWeight(), mSwords[r]->getPrice(), mSwords[r]->getInformation());
    return sword;
}

Helmet *ItemGenerator::generateRandomHelmet()
{
    int r = qrand()%mHelmets.length();
    Helmet * helmet = new Helmet(mHelmets[r]->getName(), mHelmets[r]->getImage(), mHelmets[r]->getDefense(), mHelmets[r]->getDodgingStat(), mHelmets[r]->getWeight(), mHelmets[r]->getPrice(), mHelmets[r]->getInformation());
    return helmet;
}

Breastplate *ItemGenerator::generateRandomBreastplate()
{
    int r = qrand()%mBreastplates.length();
    Breastplate * breastplate = new Breastplate(mBreastplates[r]->getName(), mBreastplates[r]->getImage(), mBreastplates[r]->getDefense(), mBreastplates[r]->getDodgingStat(), mBreastplates[r]->getWeight(), mBreastplates[r]->getPrice(), mBreastplates[r]->getInformation());
    return breastplate;
}


Gloves *ItemGenerator::generateRandomGloves()
{
    int r = qrand()%mGloves.length();
    Gloves * gloves = new Gloves(mGloves[r]->getName(), mGloves[r]->getImage(), mGloves[r]->getDefense(), mGloves[r]->getDodgingStat(), mGloves[r]->getWeight(), mGloves[r]->getPrice(), mGloves[r]->getInformation());
    return gloves;
}

Pant *ItemGenerator::generateRandomPant()
{
    int r = qrand()%mPants.length();
    Pant * pant = new Pant(mPants[r]->getName(), mPants[r]->getImage(), mPants[r]->getDefense(), mPants[r]->getDodgingStat(), mPants[r]->getWeight(), mPants[r]->getPrice(), mPants[r]->getInformation());
    return pant;
}

Footwears *ItemGenerator::generateRandomFootwears()
{
    int r = qrand()%mFootwears.length();
    Footwears * footwear = new Footwears(mFootwears[r]->getName(), mFootwears[r]->getImage(), mFootwears[r]->getDefense(), mFootwears[r]->getDodgingStat(), mFootwears[r]->getWeight(), mFootwears[r]->getPrice(), mFootwears[r]->getInformation());
    return footwear;
}

Amulet *ItemGenerator::generateRandomAmulet()
{
    int r = qrand()%mAmulets.length();
    Amulet * amulet = new Amulet(mAmulets[r]->getName(), mAmulets[r]->getImage(), mAmulets[r]->getDefense(), mAmulets[r]->getDodgingStat(), mAmulets[r]->getWeight(), mAmulets[r]->getPrice(), mAmulets[r]->getInformation());
    return amulet;
}

Consumable *ItemGenerator::generateRandomConsumable()
{
    switch(qrand()%4)
    {
    case 0 :
        return new PotionLife;
    case 1 :
        return new PotionMana;
    case 2 :
        return new PotionStamina;
    case 3 :
        return new PotionStrenght;
    }
    return nullptr;
}

Item *ItemGenerator::generateEquipment()
{
    switch(qrand()%7)
    {
    case 0 :
        return generateRandomSword();
    case 1 :
        return generateRandomHelmet();
    case 2 :
        return generateRandomBreastplate();
    case 3 :
        return generateRandomGloves();
    case 4 :
        return generateRandomPant();
    case 5 :
        return generateRandomFootwears();
    case 6 :
        return generateRandomAmulet();
    }
    qDebug() << "erreur generation random item";
    return nullptr;

}

ItemGenerator::~ItemGenerator()
{
    while(!mSwords.isEmpty())
        delete mSwords.takeLast();
    while(!mHelmets.isEmpty())
        delete mHelmets.takeLast();
    while(!mBreastplates.isEmpty())
        delete mBreastplates.takeLast();
    while(!mGloves.isEmpty())
        delete mGloves.takeLast();
    while(!mPants.isEmpty())
        delete mPants.takeLast();
    while(!mFootwears.isEmpty())
        delete mFootwears.takeLast();
    while(!mAmulets.isEmpty())
        delete mAmulets.takeLast();
}




