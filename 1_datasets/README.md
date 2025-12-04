# Datasets: UN Inbound tourism

This folder contains the raw and cleaned datasets used for our project:
“How can data-driven digital platforms showcasing Haiti’s natural
beauty, culture, and historical heritage can contribute to change the
global perception of Haiti and promote sustainable tourism?”

Our goal is to explore how the tourism market is going on, its current
state and the trend in the caribbean region and how Haiti can
position itself.

## Source of the data

1- ONU Tourism : <https://www.untourism.int/fr/statistiques-tourisme/>
base-de-donnees-statistiques-du-tourisme

2- Ministere du tourisme d'Haiti and Atouts France

## Structure of '1_datasets'

1_dataset/
│
├── raw_data/
│   ├── UN_tourism_world_raw/
│   │      ├── UN_Tourism_inbound_expenditure_10_2025.xlsx
│   │      ├── UN_Tourism_inbound_arrivals_10_2025.xlsx
│   ├── UN_tourism_haiti_raw/
│   │      ├── UN_tourism_inbound_Arrivals_haiti.csv
│   │      ├── UN_tourism_inbound_Arrivals_haiti_by_expenditure.csv
│   └── UN_tourism_caribbean_countries_raw/
│          └── UN_tourism_inbound_Arrivals_caribbean_countries.csv
│
├── cleaned_data/
│   ├── UN_tourism_caribbean_countries_cleaned/
│   │       ├── UN_tourism_caribbean_countries_cleaned.csv
│   └── UN_tourism_haiti_cleaned/
│          ├── UN_tourism_inbound_Arrivals_haiti_cleaned.csv
│          └── UN_tourism_inbound_haiti_by_expenditure_cleaned.csv
│
└── haiti_catalog_raw_data/
    ├── 1st dataset_draft.....xlsx
    ├── 2nd dataset....csv
    └── DRAFT DATASET...xlsx

## Variables

### Raw data

In raw data, you will find these variables:

- indicator_code: Code that identifies the indicator

- indicator_label: Description of the indicator

- indicator_previous_code: Indicator code used in the previous
versions of the database (e.g. in the former publications
"Compendium" [CP] and "Yearbook " [YB])

- reporter_area_code: Code that identifies the geographic area
represented by the statistical focal point that reported the
data

-reporter_area_label: Name of the reporter area as per the United
Nations standard for statistical use (M49)

-partner_area_code: Code that identifies the geographical area other
than the reporter area that participates in the phenomenon described
by the indicator (i.e. area of origin for inbound flows)

- partner_area_label: Name of the partner area as per the United
Nations standard for statistical use (M49)

- year: Year represented by the value of the indicator

- value: Value of the indicator
  
- flag: Code providing information about the quality of a value or
  about unusual or missing values, as per SDMX code list for
  observation status (<https://sdmx.org/sdmx_cdcl/>)

- flag_label: Description of the flag code

- unit: Unit of measurement that defines the scale or type of the value

- notes: Additional comments (if any)

### Cleaned data

In cleaned_data, retain these variables for our analysis:

- type_of_visitors: represent three categories of visitors: e
  excursionnists(visitors who leave the country the same day),
  tourists(at least one night in the country) and total_visitors
  (excursionnists + tourists)

- country_receiving: country that receives the flow. Where visitors
  travel  to.
- where_tourist_from: country Where visitors come from

- year: Year represented by the value of the number_of_tourist

- number_of_tourist: Amount of visitors receive by a country in a year

- unit: Unit of measurement that defines the scale or type of the    value

## Collection Method of the Data

UN Tourism systematically collects tourism statistics from countries
and territories around the world in an extensive database that
provides the most comprehensive repository of statistical information
available on the tourism sector.

Data are collected from countries by UN Tourism through a
questionnaire that is in line with the International Recommendations
for Tourism Statistics (IRTS 2008) standard led by UN Tourism and
approved by the United Nations.
